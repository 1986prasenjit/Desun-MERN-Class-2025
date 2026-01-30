/*
    !Write a program where given a string S print it after changing the middle element to *(if the length of the string is even change the 2 middle elements to *)

*/

function changeValue(str) {
    let len = str.length;
    if (len % 2 === 0) {
        let mid1 = len / 2 - 1;
        let mid2 = len / 2;
        return str.slice(0, mid1) + '**' + str.slice(mid2 + 1);
    } else {
        let mid = Math.floor(len / 2);
        return str.slice(0, mid) + '*' + str.slice(mid + 1);
    }  
}

console.log(changeValue("Hello"));
