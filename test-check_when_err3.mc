int main(){
    int a,ab;
    check (ab) {
        when 1 => 
        {
            a = a + 66;
        }
        when 1 => // konstanta se ponavlja
        {
            a = a + 1;
            finish;  
        }


        otherwise =>
        {
            a = a + 1;
        }
    }
    return 0;
}