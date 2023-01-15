//包内的模块文件名所对应的public类，可以在包外被访问(即以下import操作)
import com.what.Module;//(3)从com.what包内导入public类Module

/*
以上3行导入语句在导入模块时其实都导入了各个模块里的Public类(即Public类名=模块文件名)！
 */
public class Test {
    public static void main(String[] args) {
//        Company Baidu=new Company();//创建Company.java模块里的public类Company类的对象
//        Baidu.getDepart();

//        Main main=new Main();  //创建Main.java模块里的主类Main的对象
//        main.method();
        Module module=new Module();//创建Module.java模块里的public类Module的对象
        module.useNormal_Out_Of_Package();
    }
}
