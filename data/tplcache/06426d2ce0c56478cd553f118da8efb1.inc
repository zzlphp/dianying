<div class="bunews">
			<div class="title">
				<span class="r"><a href="{dede:field name='typeurl'/}">更多...</a></span><a href="{dede:field name='typeurl'/}">最新{dede:field name='typename'/}</a></div>
			<ul> {dede:arclist titlelen='60' row='18'}
				<li><span>[field:pubdate function="MyDate('m-d',@me)"/]</span><a href="[field:arcurl /]" target="_blank">[field:title /]</a></li>
				 {/dede:arclist}
			</ul>
			<div class="clear">
			</div>
		</div>