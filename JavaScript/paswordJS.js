
const prompt = require('prompt-sync')();//This make an alternative to take input


function random(min, max){
    return Math.floor((Math.random()*(max-min+1))+min);
}

const char = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
let password = "";


const size = char.length;
const length = prompt('Select the length of your password: ');

for(let i=0;i<length;i++){
    password+=char[random(0,70)];
}

console.log(`Your password is: ${password}`)



