var jax = new XMLHttpRequest();
jax.addEventListener("load", function() {
    console.log(this.responseText);
});

jax.open("GET", "./test.txt");
jax.send();