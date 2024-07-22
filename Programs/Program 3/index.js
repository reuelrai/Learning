function calculateArea() {
    var length = prompt("Enter the length of the rectangle:");
    var width = prompt("Enter the width of the rectangle:");

    if (isNaN(length) || isNaN(width) || length <= 0 || width <= 0) {
        alert("Please enter valid positive numbers for length and width.");
        return;
    }

    var area = length * width;
    alert("The area of rectangle is:" + area);
}
calculateArea();
