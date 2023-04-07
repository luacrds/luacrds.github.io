<?php

session_start ();

if (isset($_SESSION ['ArrayDeTasks'])){   
}
else{
    $_SESSION ['ArrayDeTasks']
}
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    echo $_POST['nome']
    array_push($_SESSION['arrayDeTasks'], $_POST['nome']);
}

print_r($_SESSION['arrayDeTasks']);