int fibonacci(int x){
    if(x == 0 || x == 1)return 1;
    return fibonacci(x-1) + fibonacci(x-2);
}

int main(){

    int x;
    x = 4;
    fibonacci(x);
    return 0;
}