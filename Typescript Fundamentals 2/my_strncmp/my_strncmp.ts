export function my_strncmp(first: string, second: string, length: number){
  
    let i = 0
    while  (first[i] < first[length] && second[i] < second[length] )
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
