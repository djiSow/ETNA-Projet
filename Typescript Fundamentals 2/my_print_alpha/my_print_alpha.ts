import { print } from './putchar';

export function my_print_alpha(){
    let n=97;
    while (n <= 122){
        print(String.fromCharCode(n))
n++;
    }
print("\n");
}
