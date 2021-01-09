
int fun (int a, int b, unsigned c){
    unsigned d;

    a = b;
    c = d;

    return 0;
}


int fun2 (int f){
    
    return f;
}


unsigned fun3 (unsigned g){
    
    return g;
}

int main() {
    int a, b, err;
    unsigned c;
    a++;
    a = fun(a,b,err);

    return 0;
  }

