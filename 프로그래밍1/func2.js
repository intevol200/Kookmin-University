function myName(name) {
    var callme = "kwangsam";
    return callme + ", " + name;
}

function run(name) {
    var name = name || "null";
    var result = myName(name);
    console.log(result);
}

run();
run("choi");