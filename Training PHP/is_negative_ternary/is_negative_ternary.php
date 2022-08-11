<?php
function is_negative_ternary($var){
    echo (is_int($var) ? (($var >= 0) ? "False\n":"True\n"):"Le parametre n'est pas un Int\n");
}
