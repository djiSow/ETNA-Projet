export function my_strcmp(first: string, second: string){
  
  let i = 0
  while  (first[i] == second[i] && first[i] && second[i] )
  {
      i++
  }
  if (first[i]  == undefined && second[i] == undefined){
    return (0);
  }
  if (first[i] == undefined && second[i]){
    return -second.charCodeAt(i)
  }
  if (second[i] == undefined && first[i]){
    return first.charCodeAt(i)
  }
  return first.charCodeAt(i) - second.charCodeAt(i);

}
