<?php
include 'flag.php';

if(isset($_GET['view-source'])){
    highlight_file(__FILE__);
    die();
}

if(!strcmp($_GET['flag'],$flag)){
    echo $flag;
}else{
    echo "wrong flag";
}