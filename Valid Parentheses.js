
Problem Name: Valid Parentheses

Problem on leetcode: https://leetcode.com/problems/valid-parentheses/

Solve Problem Using C++:

/**
 * @param {string} s
 * @return {boolean}
 */

var repare=(open,close)=>{
    if(open==='('&&close===')') 
        return true;
    else if(open==='['&&close===']') 
        return true;
    else if(open==='{'&&close==='}') 
        return true;
    else 
        return false;
}

var isValid = function(s) {
    let stack= [];
  
    for(let i=0;i<=s.length;i++){
        if(s[i]==='('||s[i]==='['||s[i]==='{')
            stack.push(s[i]);
        
        else if(s[i]===')'||s[i]===']'||s[i]==='}'){
            if(stack.length===0||!repare(stack.pop(),s[i]))
                return false
        }
    }
    
    return stack.length===0?true:false;
};