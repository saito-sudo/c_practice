void hello(); // 「別のどこかに hello という関数があるよ」という予告

int main() {
    hello(); // func.c にある関数を呼び出す
    return 0;
}