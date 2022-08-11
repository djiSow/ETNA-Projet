<?php
function calc($op="",$nb=0){
    if (is_int($nb)){
        static $res=0;
        if ($op =="+"){
           return  $res=$res+$nb;
            
        }
        if ($op == "-"){
           return  $res=$res-$nb;
             
        }
        if ($op == "*"){
           return $res=$res*$nb;
            
        }
        if ($op == "/"){
            if($nb == 0){
                
                echo "Division by 0!\n";
                return $res;
            }
            else 
                {return $res=intdiv($res,$nb);
            }
        }
        if ($op == "%"){
            if($nb == 0){
                
                echo "Division by 0!\n";
                return $res;
            }
           else {return $res=$res%$nb;
             }
        }
        if ($op == "="){
             return $res=$nb;
             
        }
        
            return $res;
    }
    else echo "Le parametre n'est pas un Int\n";
    
}


