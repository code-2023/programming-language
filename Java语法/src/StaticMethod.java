
public class StaticMethod {
    public static int count = 1;    // 定义静态变量count
    public static int static_method() {
        // 静态方法method2
        count += count;    // 访问静态变量count并赋值
        System.out.println("调用静态方法！");
        return count;
    }
    public static void main(String[] args) {
        // 直接调用静态方法
        static_method();
    }
}