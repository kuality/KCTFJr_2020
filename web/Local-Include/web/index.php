<?php
if(isset($_GET['view-source'])){
    highlight_file(__FILE__);
    die();
}

$dest = $_GET['page'];
if(!isset($dest))
    $dest = "home";

if(in_array($dest,['dog','cat','home']))
    include "pages/".$dest.".php";
else
    include $dest;

?>