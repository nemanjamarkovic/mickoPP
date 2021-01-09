int main(){
    int ab,a;
    check (ab) {
        when 1 => 
            a = a + 66;
            finish;  
        when 3 =>
        {
            a = a + 1;
        }


        otherwise =>
        {
            a = a + 1;
        }
    }

//otherwise je opcionalan
    check (ab) {
        when 2 => 
        {
            a = a + 66;
        }
        when 5 =>
        {
            a = a + 1;
        }
            finish;  
    }
    


    return 0;
}