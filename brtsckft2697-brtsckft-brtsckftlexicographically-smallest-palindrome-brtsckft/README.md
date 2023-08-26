<h2><a href="https://leetcode.com/problems/lexicographically-smallest-palindrome/"><brtsckft>2697</brtsckft>. <brtsckft>Lexicographically Smallest Palindrome</brtsckft></a></h2><h3>Easy</h3><hr><div><p><brtsckft>You are given a string </brtsckft><code node="[object Object]">s</code><brtsckft> consisting of </brtsckft><strong><brtsckft>lowercase English letters</brtsckft></strong><brtsckft><brtsckfr>, </brtsckfr><brtsckfr>and</brtsckfr> <brtsckfr>you</brtsckfr> <brtsckfr>are</brtsckfr> <brtsckfl>allow</brtsckfl><brtsckfr>ed</brtsckfr> <brtsckfr>to</brtsckfr> <brtsckfl>perf</brtsckfl><brtsckfr>orm</brtsckfr> <brtsckfl>opera</brtsckfl><brtsckfr>tions</brtsckfr> <brtsckfr>on</brtsckfr> <brtsckfr>it</brtsckfr><brtsckfr>. </brtsckfr><brtsckfr>In</brtsckfr> <brtsckfr>one</brtsckfr> <brtsckfl>opera</brtsckfl><brtsckfr>tion</brtsckfr><brtsckfr>, </brtsckfr><brtsckfr>you</brtsckfr> <brtsckfr>can</brtsckfr> </brtsckft><strong><brtsckft>replace</brtsckft></strong><brtsckft> a character in </brtsckft><code node="[object Object]">s</code><brtsckft> with another lowercase English letter.</brtsckft></p>

<p><brtsckft>Your task is to make </brtsckft><code node="[object Object]">s</code> a <strong><brtsckft>palindrome</brtsckft></strong><brtsckft> with the </brtsckft><strong><brtsckft>minimum</brtsckft></strong> <strong><brtsckft>number</brtsckft></strong> <strong><brtsckft>of operations</brtsckft></strong><brtsckft> possible. If there are </brtsckft><strong><brtsckft>multiple palindromes</brtsckft></strong><brtsckft> that can be </brtsckft><meta charset="utf-8"><brtsckft>made using the </brtsckft><strong><brtsckft>minimum</brtsckft></strong><brtsckft> number of operations, </brtsckft><meta charset="utf-8"><brtsckft>make the </brtsckft><strong><brtsckft>lexicographically smallest</brtsckft></strong><brtsckft> one.</brtsckft></p>

<p><brtsckft>A string </brtsckft><code>a</code><brtsckft> is lexicographically smaller than a string </brtsckft><code>b</code><brtsckft><brtsckfr> (</brtsckfr><brtsckfr>of</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>sam</brtsckfl><brtsckfr>e</brtsckfr> <brtsckfl>le</brtsckfl><brtsckfr>ngth</brtsckfr><brtsckfr>) </brtsckfr><brtsckfr>if</brtsckfr> <brtsckfr>in</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>fi</brtsckfl><brtsckfr>rst</brtsckfr> <brtsckfl>posit</brtsckfl><brtsckfr>ion</brtsckfr> <brtsckfl>wher</brtsckfl><brtsckfr>e</brtsckfr> </brtsckft><code>a</code><brtsckft> and </brtsckft><code>b</code><brtsckft> differ, string </brtsckft><code>a</code><brtsckft> <brtsckfr>has</brtsckfr> <brtsckfl>a</brtsckfl> <brtsckfl>lett</brtsckfl><brtsckfr>er</brtsckfr> <brtsckfl>tha</brtsckfl><brtsckfr>t</brtsckfr> <brtsckfl>appea</brtsckfl><brtsckfr>rs</brtsckfr> <brtsckfl>earlie</brtsckfl><brtsckfr>r</brtsckfr> <brtsckfr>in</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>alphab</brtsckfl><brtsckfr>et</brtsckfr> <brtsckfl>tha</brtsckfl><brtsckfr>n</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>correspond</brtsckfl><brtsckfr>ing</brtsckfr> <brtsckfl>lett</brtsckfl><brtsckfr>er</brtsckfr> <brtsckfr>in</brtsckfr> </brtsckft><code>b</code>.</p>

<p><brtsckft>Return </brtsckft><em><brtsckft>the resulting palindrome string.</brtsckft></em></p>

<p>&nbsp;</p>
<p><strong class="example"><brtsckft>Example 1:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "egcfe"
<strong>Output:</strong> "efcfe"
<strong>Explanation:</strong> The minimum number of operations to make "egcfe" a palindrome is 1, and the lexicographically smallest palindrome string we can get by modifying one character is "efcfe", by changing 'g'.
</pre>

<p><strong class="example"><brtsckft>Example 2:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "abcd"
<strong>Output:</strong> "abba"
<strong>Explanation:</strong> The minimum number of operations to make "abcd" a palindrome is 2, and the lexicographically smallest palindrome string we can get by modifying two characters is "abba".
</pre>

<p><strong class="example"><brtsckft>Example 3:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "seven"
<strong>Output:</strong> "neven"
<strong>Explanation:</strong> The minimum number of operations to make "seven" a palindrome is 1, and the lexicographically smallest palindrome string we can get by modifying one character is "neven".
</pre>

<p>&nbsp;</p>
<p><strong><brtsckft>Constraints:</brtsckft></strong></p>

<ul>
	<li><code><brtsckft>1 &lt;= s.length &lt;= 1000</brtsckft></code></li>
	<li><code>s</code><brtsckft>&nbsp;consists of only lowercase English letters</brtsckft><b>.</b></li>
</ul>
</div>