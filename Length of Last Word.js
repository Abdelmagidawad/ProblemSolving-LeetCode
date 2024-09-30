
Problem Name:  Length of Last Word

Problem on leetcode: https://leetcode.com/problems/length-of-last-word/

Solve Problem Using javaScript:

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let count=0;
    for(let i=(s.length-1);i>=0;i--){
        if(s[i]===' '&&count!=0)
            break;
        else if(s[i]!==' ')
            count++;
    }
    return count;
};