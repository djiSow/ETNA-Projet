import { print } from './putchar';

export function my_print_revalpha(){
    let n=122;
    while (n >= 97){
        print(String.fromCharCode(n))
n--;
    }
print("\n");
}
