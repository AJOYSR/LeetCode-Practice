<h2><a href="https://leetcode.com/problems/find-maximum-number-of-string-pairs/"><brtsckft>2744</brtsckft>. <brtsckft>Find Maximum Number of String Pairs</brtsckft></a></h2><h3>Easy</h3><hr><div><p><brtsckft>You are given a </brtsckft><strong><brtsckft>0-indexed</brtsckft></strong><brtsckft> array </brtsckft><code><brtsckft>words</brtsckft></code><brtsckft> consisting of </brtsckft><strong><brtsckft>distinct</brtsckft></strong><brtsckft> strings.</brtsckft></p>

<p><brtsckft>The string </brtsckft><code><brtsckft>words[i]</brtsckft></code><brtsckft> can be paired with the string </brtsckft><code><brtsckft>words[j]</brtsckft></code><brtsckft> if:</brtsckft></p>

<ul>
	<li><brtsckft>The string </brtsckft><code><brtsckft>words[i]</brtsckft></code><brtsckft> is equal to the reversed string of </brtsckft><code><brtsckft>words[j]</brtsckft></code>.</li>
	<li><code><brtsckft>0 &lt;= i &lt; j &lt; words.length</brtsckft></code>.</li>
</ul>

<p><brtsckft>Return </brtsckft><em><brtsckft>the </brtsckft><strong><brtsckft>maximum</brtsckft></strong><brtsckft> <brtsckfl>numb</brtsckfl><brtsckfr>er</brtsckfr> <brtsckfr>of</brtsckfr> <brtsckfl>pai</brtsckfl><brtsckfr>rs</brtsckfr> <brtsckfl>tha</brtsckfl><brtsckfr>t</brtsckfr> <brtsckfr>can</brtsckfr> <brtsckfr>be</brtsckfr> <brtsckfl>form</brtsckfl><brtsckfr>ed</brtsckfr> <brtsckfl>fro</brtsckfl><brtsckfr>m</brtsckfr> <brtsckfr>the</brtsckfr> <brtsckfl>arr</brtsckfl><brtsckfr>ay</brtsckfr> </brtsckft></em><code><brtsckft>words</brtsckft></code><em>.</em></p>

<p><brtsckft>Note that&nbsp;each string can belong in&nbsp;</brtsckft><strong><brtsckft>at most one</brtsckft></strong><brtsckft> pair.</brtsckft></p>

<p>&nbsp;</p>
<p><strong class="example"><brtsckft>Example 1:</brtsckft></strong></p>

<pre><strong>Input:</strong> words = ["cd","ac","dc","ca","zz"]
<strong>Output:</strong> 2
<strong>Explanation:</strong> In this example, we can form 2 pair of strings in the following way:
- We pair the 0<sup>th</sup> string with the 2<sup>nd</sup> string, as the reversed string of word[0] is "dc" and is equal to words[2].
- We pair the 1<sup>st</sup> string with the 3<sup>rd</sup> string, as the reversed string of word[1] is "ca" and is equal to words[3].
It can be proven that 2 is the maximum number of pairs that can be formed.</pre>

<p><strong class="example"><brtsckft>Example 2:</brtsckft></strong></p>

<pre><strong>Input:</strong> words = ["ab","ba","cc"]
<strong>Output:</strong> 1
<strong>Explanation:</strong> In this example, we can form 1 pair of strings in the following way:
- We pair the 0<sup>th</sup> string with the 1<sup>st</sup> string, as the reversed string of words[1] is "ab" and is equal to words[0].
It can be proven that 1 is the maximum number of pairs that can be formed.
</pre>

<p><strong class="example"><brtsckft>Example 3:</brtsckft></strong></p>

<pre><strong>Input:</strong> words = ["aa","ab"]
<strong>Output:</strong> 0
<strong>Explanation:</strong> In this example, we are unable to form any pair of strings.
</pre>

<p>&nbsp;</p>
<p><strong><brtsckft>Constraints:</brtsckft></strong></p>

<ul>
	<li><code><brtsckft>1 &lt;= words.length &lt;= 50</brtsckft></code></li>
	<li><code><brtsckft>words[i].length == 2</brtsckft></code></li>
	<li><code><brtsckft>words</brtsckft></code><brtsckft>&nbsp;consists of distinct strings.</brtsckft></li>
	<li><code><brtsckft>words[i]</brtsckft></code><brtsckft>&nbsp;contains only lowercase English letters.</brtsckft></li>
</ul>
</div>