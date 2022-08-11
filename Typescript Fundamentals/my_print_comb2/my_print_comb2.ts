import { print } from './putchar';

export function my_print_comb2(){

    for( let a = 0 ; a <= 9; a++ ){

        for( let b = 0 ; b <= 9; b++){

            for( let c = 0; c <= 9; c++){

                for ( let d = 0; d <= 9; d++){

                    if( a * 10 + b < c * 10 + d ){
                        print(a);
                        print(b);
                        print(" ");
                        print(c);
                        print(d)
                       

                        if(a === 9 && b === 8 && c === 9 && d === 9){
                            
                            print("\n")
                        }
                        else{
                            print(",");
                            print(" ");
                        }
                        
                    }//fi

                }//fp

            }//fp

        }//fp

    }//fp
   
 }




 