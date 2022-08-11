import { stringify } from 'querystring';
import { print } from './putchar';

export function my_putstr(str: string){

    let n=0
    while (n < str.length){
       
       print(str.charAt(n));
        n++;
    }
    
}

