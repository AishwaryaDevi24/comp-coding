const str1 = "Hi I am Aishu";

const str_arr = str1.split("");
console.log(str_arr);
let resultStrArr = [];
let resultStr = "";
for(let i = str_arr.length; i >= 0; i--) {
  resultStrArr.push(str_arr[i]);
}
resultStr = resultStrArr.join("");
console.log(resultStr);