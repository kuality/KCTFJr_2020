<?php
include 'flag.php';

if(isset($_GET['view-source'])){
    highlight_file(__FILE__);
    die();
}

$obj = $_GET['obj'];
$obj = unserialize($obj);
if(isset($obj->link))
    eval($obj->link);

?>