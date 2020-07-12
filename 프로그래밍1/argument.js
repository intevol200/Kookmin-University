function a() {
    console.log(arguments);
    console.log(arguments[2]);

    for(var i=0; i < arguments.length; i++) {
        console.log(arguments[i]);
    }
}
a(1,2,"three");