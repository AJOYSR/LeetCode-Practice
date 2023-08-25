<h2><a href="https://leetcode.com/problems/occurrences-after-bigram/"><brtsckft>1078</brtsckft>. <brtsckft>Occurrences After Bigram</brtsckft></a></h2><h3>Easy</h3><hr><div><p><brtsckft>Given two strings </brtsckft><code><brtsckft>first</brtsckft></code><brtsckft> and </brtsckft><code><brtsckft>second</brtsckft></code><brtsckft>, consider occurrences in some text of the form </brtsckft><code><brtsckft>"first second third"</brtsckft></code><brtsckft>, where </brtsckft><code><brtsckft>second</brtsckft></code><brtsckft> comes immediately after </brtsckft><code><brtsckft>first</brtsckft></code><brtsckft>, and </brtsckft><code><brtsckft>third</brtsckft></code><brtsckft> comes immediately after </brtsckft><code><brtsckft>second</brtsckft></code>.</p>

<p><brtsckft>Return </brtsckft><em><brtsckft>an array of all the words</brtsckft></em> <code><brtsckft>third</brtsckft></code> <em><brtsckft>for each occurrence of</brtsckft></em> <code><brtsckft>"first second third"</brtsckft></code>.</p>

<p>&nbsp;</p>
<p><strong class="example"><brtsckft>Example 1:</brtsckft></strong></p>
<pre><strong>Input:</strong> text = "alice is a good girl she is a good student", first = "a", second = "good"
<strong>Output:</strong> ["girl","student"]
</pre><p><strong class="example"><brtsckft>Example 2:</brtsckft></strong></p>
<pre><strong>Input:</strong> text = "we will we will rock you", first = "we", second = "will"
<strong>Output:</strong> ["we","rock"]
</pre>
<p>&nbsp;</p>
<p><strong><brtsckft>Constraints:</brtsckft></strong></p>

<ul>
	<li><code><brtsckft>1 &lt;= text.length &lt;= 1000</brtsckft></code></li>
	<li><code><brtsckft>text</brtsckft></code><brtsckft> consists of lowercase English letters and spaces.</brtsckft></li>
	<li><brtsckft>All the words in </brtsckft><code><brtsckft>text</brtsckft></code><brtsckft> a separated by </brtsckft><strong><brtsckft>a single space</brtsckft></strong>.</li>
	<li><code><brtsckft>1 &lt;= first.length, second.length &lt;= 10</brtsckft></code></li>
	<li><code><brtsckft>first</brtsckft></code><brtsckft> and </brtsckft><code><brtsckft>second</brtsckft></code><brtsckft> consist of lowercase English letters.</brtsckft></li>
</ul>
</div>