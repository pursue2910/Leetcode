class Solution {
    public int longestValidParentheses(String s) {
        Stack<Integer> s1 = new Stack<Integer>();
        s1.push(-1);
        
        int max=0;
        for(int i=0;i<s.length();i++){
            char c= s.charAt(i);
            if(c=='(')
            s1.push(i);
            
            else{
                s1.pop();
                if (!s1.isEmpty()){
                    
                    int len=i-s1.peek();
                    max=Math.max(max,len);

                }
                else{
                    s1.push(i);
                }
            }
            

        }
        return max;
        
    }
}