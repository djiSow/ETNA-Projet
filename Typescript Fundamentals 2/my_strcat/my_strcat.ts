export function FindLenght(str:string){
  let i:number = 0;
  while(str[i]){
    i++
  }
  return i;
}
export function my_strcat(dest: string, src: string, nb:number){
  let j = FindLenght(dest)+1  
  let i=0
    while(i < nb){
    dest += src[i] 
    i++
    j++
    }
    return dest;
    
  
  }

