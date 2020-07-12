var oReq = new XMLHttpRequest();
oReq.addEventListener("load", function() {
    var jsonobj = JSON.parse(this.responseText);
    var name = jsonobj.favorites[1];
    var outside = document.querySelector(".outside");
    outside.innerHTML += ("<span> " + name + "</span>");
});

oReq.open("GET", "./jason.txt");
oReq.send();