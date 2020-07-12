function printName(firstname) {
    return "name is " + firstname;
}
console.log(printName("choi", "kwang"));

function printMe(name) {
    var myname = "choi";
    return myname + "" + name;
}
console.log(printMe("kwangsam"));

function testfunc(func) {
    console.log("function test : " + func);

    var inner = function() {
        return "inner value";
    }

    var test = inner();
    console.log("function : " + test);
}
testfunc("testing");

//////////////////////////////////
var aaa = inner();
console.log(typeof inner);
console.log("testing : " + aaa);

function inner() {
    return "javascript";
}
//////////////////////////////////

function a() {
}
console.log(a());