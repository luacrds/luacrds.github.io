<!DOCTYPE html>
<html>
<head>
    <meta charset= "UTF-8">
    <tittle>Insert Task</tittle>       
</head>
<body>
    <h1>Inserir Tarefa</h1>
    <form method="post" action="main.php">
        <label for="name">Name:</label>
        <input type="text" name="name" id="name" required><br>
        
        <label for= "details">Details:</label>
        <textarea name="details" id="details"></textarea><br>

        <input type="submit" value="Enviar" name="btnSubmitInsertTaskForm">
    </form>
</body>
</html>