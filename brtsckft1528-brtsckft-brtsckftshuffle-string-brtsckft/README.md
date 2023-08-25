<h2><a href="https://leetcode.com/problems/shuffle-string/"><brtsckft>1528</brtsckft>. <brtsckft>Shuffle String</brtsckft></a></h2><h3>Easy</h3><hr><div><p><brtsckft>You are given a string </brtsckft><code>s</code><brtsckft> and an integer array </brtsckft><code><brtsckft>indices</brtsckft></code><brtsckft> of the </brtsckft><strong><brtsckft>same length</brtsckft></strong><brtsckft>. The string </brtsckft><code>s</code><brtsckft> will be shuffled such that the character at the </brtsckft><code>i<sup><brtsckft>th</brtsckft></sup></code><brtsckft> position moves to </brtsckft><code><brtsckft>indices[i]</brtsckft></code><brtsckft> in the shuffled string.</brtsckft></p>

<p><brtsckft>Return </brtsckft><em><brtsckft>the shuffled string</brtsckft></em>.</p>

<p>&nbsp;</p>
<p><strong class="example"><brtsckft>Example 1:</brtsckft></strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/07/09/q1.jpg" style="width: 321px; height: 243px;">
<pre><strong>Input:</strong> s = "codeleet", <code>indices</code> = [4,5,6,7,0,2,1,3]
<strong>Output:</strong> "leetcode"
<strong>Explanation:</strong> As shown, "codeleet" becomes "leetcode" after shuffling.
</pre>

<p><strong class="example"><brtsckft>Example 2:</brtsckft></strong></p>

<pre><strong>Input:</strong> s = "abc", <code>indices</code> = [0,1,2]
<strong>Output:</strong> "abc"
<strong>Explanation:</strong> After shuffling, each character remains in its position.
</pre>

<p>&nbsp;</p>
<p><strong><brtsckft>Constraints:</brtsckft></strong></p>

<ul>
	<li><code><brtsckft>s.length == indices.length == n</brtsckft></code></li>
	<li><code><brtsckft>1 &lt;= n &lt;= 100</brtsckft></code></li>
	<li><code>s</code><brtsckft> consists of only lowercase English letters.</brtsckft></li>
	<li><code><brtsckft>0 &lt;= indices[i] &lt; n</brtsckft></code></li>
	<li><brtsckft>All values of </brtsckft><code><brtsckft>indices</brtsckft></code><brtsckft> are </brtsckft><strong><brtsckft>unique</brtsckft></strong>.</li>
</ul>
</div>