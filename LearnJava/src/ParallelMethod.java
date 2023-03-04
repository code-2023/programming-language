public class ParallelMethod {
    int b=2;
    void new_func(){
        System.out.println("调用new_func方法");
    }
    void func(){
        System.out.println("调用func方法");
        new_func();//调用类内平行方法
    }
    public static void main(String[] args) {
        ParallelMethod obj = new ParallelMethod();
        //调用方法func的同时会执行new_func方法
        obj.func();
        }
}