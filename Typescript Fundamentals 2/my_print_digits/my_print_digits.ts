import { print } from './putchar';

export function my_print_digits(){
    let n=48;
    while (n <= 57){
        print(String.fromCharCode(n))
n++;
    }
print("\n");
}

