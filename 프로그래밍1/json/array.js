var a = [1,2,3, "hello", null, true, []];
console.log(a.length);

var b = [4];
b[1000]=3;
console.log(b.length);
console.log(b[1000]);

var c = [4];
c.push(5);
console.log(c);

var d = [1,2,3,4,5];
console.log(d.indexOf(3));

var e = [1,2,3]
var e10 = e.concat(10,11);
console.log(e, e10);

var zzz = function(v,i,o) {
    console.log(v);
};
e10.forEach(zzz);

var mapped = e10.map(function(v) {
    return v * 2;
});
console.log(mapped, e10)