/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
    let l = 0;
    let r = s.length - 1;

    while (l < r) {
        while (l < r && !s[l].match(/^[0-9a-zA-Z]+$/)) {
            l++;
        }
        while (l < r && !s[r].match(/^[0-9a-zA-Z]+$/)) {
            r--;
        }
        if (s[l].toLowerCase() !== s[r].toLowerCase()) {
            console.log("L:", s[l], "R:", s[r]);
            return false;
        }
        l++;
        r--;
    }
    return true;
};

function alphanum(ch) {
    console.log(ch.charCodeAt(0), 'A'.charCodeAt(0));
    return ('A'.charCodeAt(0) <= ch.charCodeAt(0) <= 'Z'.charCodeAt(0) || 'a'.charCodeAt(0) <= ch.charCodeAt(0) <= 'z'.charCodeAt(0) || '0'.charCodeAt(0) <= ch.charCodeAt(0) <= '9'.charCodeAt(0));
}

console.log(isPalindrome("A man, a plan, a canal: Panama"));
