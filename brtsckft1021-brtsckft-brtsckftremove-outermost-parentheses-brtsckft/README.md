<h2><a href="https://leetcode.com/problems/remove-outermost-parentheses/"><brtsckft>1021</brtsckft>. <brtsckft>Remove Outermost Parentheses</brtsckft></a></h2><h3>Easy</h3><hr><div><p><brtsckft>A valid parentheses string is either empty </brtsckft><code><brtsckft>""</brtsckft></code>, <code><brtsckft>"(" + A + ")"</brtsckft></code><brtsckft>, or </brtsckft><code><brtsckft>A + B</brtsckft></code><brtsckft>, where </brtsckft><code>A</code><brtsckft> and </brtsckft><code>B</code><brtsckft> are valid parentheses strings, and </brtsckft><code>+</code><brtsckft> represents string concatenation.</brtsckft></p>

<ul>
	<li><brtsckft>For example, </brtsckft><code><brtsckft>""</brtsckft></code>, <code><brtsckft>"()"</brtsckft></code>, <code><brtsckft>"(())()"</brtsckft></code><brtsckft>, and </brtsckft><code><brtsckft>"(()(()))"</brtsckft></code><brtsckft> are all valid parentheses strings.</brtsckft></li>
</ul>

<p><brtsckft>A valid parentheses string </brtsckft><code>s</code><brtsckft> <brtsckfr>is</brtsckfr> <brtsckfl>primit</brtsckfl><brtsckfr>ive</brtsckfr> <brtsckfr>if</brtsckfr> <brtsckfr>it</brtsckfr> <brtsckfr>is</brtsckfr> <brtsckfl>none</brtsckfl><brtsckfr>mpty</brtsckfr><brtsckfr>, </brtsckfr><brtsckfr>and</brtsckfr> <brtsckfl>ther</brtsckfl><brtsckfr>e</brtsckfr> <brtsckfl>doe</brtsckfl><brtsckfr>s</brtsckfr> <brtsckfr>not</brtsckfr> <brtsckfl>exi</brtsckfl><brtsckfr>st</brtsckfr> <brtsckfl>a</brtsckfl> <brtsckfr>way</brtsckfr> <brtsckfr>to</brtsckfr> <brtsckfl>spli</brtsckfl><brtsckfr>t</brtsckfr> <brtsckfr>it</brtsckfr> <brtsckfl>int</brtsckfl><brtsckfr>o</brtsckfr> </brtsckft><code><brtsckft>s = A + B</brtsckft></code><brtsckft>, with </brtsckft><code>A</code><brtsckft> and </brtsckft><code>B</code><brtsckft> nonempty valid parentheses strings.</brtsckft></p>

<p><brtsckft>Given a valid parentheses string </brtsckft><code>s</code><brtsckft>, consider its primitive decomposition: </brtsckft><code><brtsckft>s = P</brtsckft><sub>1</sub><brtsckft> + P</brtsckft><sub>2</sub><brtsckft> + ... + P</brtsckft><sub>k</sub></code><brtsckft>, where </brtsckft><code>P<sub>i</sub></code><brtsckft> are primitive valid parentheses strings.</brtsckft></p>

<p><brtsckft>Return </brtsckft><code>s</code> <em><brtsckft><brtsckfl>afte</brtsckfl><brtsckfr>r</brtsckfr> <brtsckfl>remov</brtsckfl><brtsckfr>ing</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>outerm</brtsckfl><brtsckfr>ost</brtsckfr> <brtsckfl>parenthes</brtsckfl><brtsckfr>es</brtsckfr> <brtsckfr>of</brtsckfr> <brtsckfl>eve</brtsckfl><brtsckfr>ry</brtsckfr> <brtsckfl>primit</brtsckfl><brtsckfr>ive</brtsckfr> <brtsckfl>stri</brtsckfl><brtsckfr>ng</brtsckfr> <brtsckfr>in</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>primit</brtsckfl><brtsckfr>ive</brtsckfr> <brtsckfl>decompos</brtsckfl><brtsckfr>ition</brtsckfr> <brtsckfr>of</brtsckfr> </brtsckft></em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example"><brtsckft>Example 1:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "(()())(())"
<strong>Output:</strong> "()()()"
<strong>Explanation:</strong> 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
</pre>

<p><strong class="example"><brtsckft>Example 2:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "(()())(())(()(()))"
<strong>Output:</strong> "()()()()(())"
<strong>Explanation:</strong> 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
</pre>

<p><strong class="example"><brtsckft>Example 3:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "()()"
<strong>Output:</strong> ""
<strong>Explanation:</strong> 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".
</pre>

<p>&nbsp;</p>
<p><strong><brtsckft>Constraints:</brtsckft></strong></p>

<ul>
	<li><code><brtsckft>1 &lt;= s.length &lt;= 10</brtsckft><sup>5</sup></code></li>
	<li><code><brtsckft>s[i]</brtsckft></code><brtsckft> is either </brtsckft><code><brtsckft>'('</brtsckft></code><brtsckft> or </brtsckft><code><brtsckft>')'</brtsckft></code>.</li>
	<li><code>s</code><brtsckft> is a valid parentheses string.</brtsckft></li>
</ul>
</div>