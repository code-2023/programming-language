class Company {
    public int Total;
    public String Depart;
    public void getDepart(){
        System.out.println("管理部 财务部 技术部 宣传部");
    }
}
public class newTest {
    public static void main(String[] args) {
        Company Baidu=new Company();
        Baidu.getDepart();
    }
}
