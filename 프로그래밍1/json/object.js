var objectArray = {
    key: "value",
    addition: [
        {name: "choi"}, {age: 25}
    ]
};
console.log(objectArray.key);
console.log(objectArray.addition[0].name);

for(key in objectArray) {
    console.log(objectArray[key]);
};
for(value in objectArray) {
    console.log(value);
};

Object.keys(objectArray).forEach(function(v) {
    console.log(objectArray[v]);
});