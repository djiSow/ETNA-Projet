<?php
function is_negative($var=0){
    if (is_int($var)){
        if ($var >= 0){
            echo "False\n";
        }
        
        if($var < 0){
            echo "True\n";
        }
   
    }
    else
    echo "Le parametre n'est pas un Int\n";
}

