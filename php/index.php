<?php

require_once 'Shirt.php';

// Membuat objek-objek Shirt
$shirt1 = new Shirt(1, "T-Shirt", "Adidas", "Rp159.999", "M", "Cotton", "Male", "Red", "Short");
$shirt2 = new Shirt(2, "Polo Shirt", "Nike", "Rp239.999", "L", "Polyester", "Male", "Blue", "Long");
$shirt3 = new Shirt(3, "Tank Top", "Puma", "Rp99.999", "S", "Spandex", "Female", "Black", "Sleeveless");

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Product List</title>
    <style>
        table
        {
            border-collapse: collapse;
            width: 100%;
        }
        th, td
        {
            border: 1px solid black;
            padding: 8px;
            text-align: left;
        }
    </style>
</head>
<body>

<h2>DATA PEMBELIAN KAOS</h2>

<table>
    <tr>
        <th>ID</th>
        <th>Name</th>
        <th>Brand</th>
        <th>Price</th>
        <th>Size</th>
        <th>Material</th>
        <th>Gender</th>
        <th>Color</th>
        <th>Sleeve Type</th>
    </tr>
    <tr>
        <td><?php echo $shirt1->getIdProduct(); ?></td>
        <td><?php echo $shirt1->getName(); ?></td>
        <td><?php echo $shirt1->getBrand(); ?></td>
        <td><?php echo $shirt1->getPrice(); ?></td>
        <td><?php echo $shirt1->getSize(); ?></td>
        <td><?php echo $shirt1->getMaterial(); ?></td>
        <td><?php echo $shirt1->getGender(); ?></td>
        <td><?php echo $shirt1->getColor(); ?></td>
        <td><?php echo $shirt1->getSleeveType(); ?></td>
    </tr>
    <tr>
        <td><?php echo $shirt2->getIdProduct(); ?></td>
        <td><?php echo $shirt2->getName(); ?></td>
        <td><?php echo $shirt2->getBrand(); ?></td>
        <td><?php echo $shirt2->getPrice(); ?></td>
        <td><?php echo $shirt2->getSize(); ?></td>
        <td><?php echo $shirt2->getMaterial(); ?></td>
        <td><?php echo $shirt2->getGender(); ?></td>
        <td><?php echo $shirt2->getColor(); ?></td>
        <td><?php echo $shirt2->getSleeveType(); ?></td>
    </tr>
    <tr>
        <td><?php echo $shirt3->getIdProduct(); ?></td>
        <td><?php echo $shirt3->getName(); ?></td>
        <td><?php echo $shirt3->getBrand(); ?></td>
        <td><?php echo $shirt3->getPrice(); ?></td>
        <td><?php echo $shirt3->getSize(); ?></td>
        <td><?php echo $shirt3->getMaterial(); ?></td>
        <td><?php echo $shirt3->getGender(); ?></td>
        <td><?php echo $shirt3->getColor(); ?></td>
        <td><?php echo $shirt3->getSleeveType(); ?></td>
    </tr>
</table>

</body>
</html>
