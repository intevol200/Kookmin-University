var btn = document.querySelector("button");
var target = document.querySelector(".outside");

btn.addEventListener("click", function() {
    var prev = parseInt(target.style.left);
    target.style.left = prev + 100 + "px";
});