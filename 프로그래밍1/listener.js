var bb = document.querySelector(".listener");

bb.addEventListener("click", function(evt) {
    var target = evt.target;
    console.log(target.className, target.nodeName);
    console.log(target.innerText);
    console.log("clicked", evt);
});