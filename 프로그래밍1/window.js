function run() {
    setTimeout(function() {
        var msg = "hello world";
        console.log(msg);
        console.log("loading...");
    }, 2000);
    console.log("managing")
}
// n초 뒤에 함수 실행 //
console.log("run start");
run();
console.log("finish")

function test() {
    setInterval(function() {
        var aaa = "test interval";
        console.log(aaa);
    }, 3000);
}

test();