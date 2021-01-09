int main(){
    int ab,a;
    ab = 5;
    a = 0;
    // check (ab) {
    //     when 1 => 
    //         a = a + 66;
    //     when 3 =>
    //     {
    //         a = a + 3;
    //     }
    //         finish;  


    //     otherwise =>
    //     {
    //         a = a + 1;
    //     }
    // }

//otherwise je opcionalan
    check (ab) {
        when 2 => 
        {
            // a = a + 66;
            for int foo in (2..10){
               a = a + 1;    
    }
        }
            finish;  
        when 5 =>
        {
            a = a + 1;
        }
    }
    


    return a;
}