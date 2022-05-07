interface Income_1190
{
    double earnings();
    double deductions();
    double bonus();
}
abstract class Manager_1190 implements Income_1190
{
    double basic;
    public double earnings()
    {
        return basic+0.8*basic+0.15*basic;
    }
    public double deductions()
    {
        return 0.12*basic;
    }
}
class Substaff extends Manager_1190
{
    Substaff(double base)
    {
        basic = base;
    }
    public double bonus()
    {
        return 0.5*basic;
    }
}
public class IncomeManager
{
    public static void main(String[] args)
    {
        Substaff obj=new Substaff(500.0);
        System.out.println("Earnings\tDeductions\tBonus");
        System.out.println(obj.earnings()+"\t\t"+obj.deductions()+"\t\t"+obj.bonus());
    }
}