<?php

require_once 'Clothing.php';

class Shirt extends Clothing
{
    protected $color;
    protected $sleeveType;

    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color, $sleeveType)
    {
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeveType = $sleeveType;
    }

    public function getColor()
    {
        return $this->color;
    }

    public function getSleeveType()
    {
        return $this->sleeveType;
    }
}

?>