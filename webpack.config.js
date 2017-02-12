const path = require('path')
const ExtractTextPlugin = require ('extract-text-webpack-plugin')
const config = {
	entry: './assets/js/index.js',
	output: {
		path: path.resolve(__dirname, './dist'),
		filename: 'bundle.js'
	},
	module: {
		rules: [{
			test: /\.scss$/,
			use: ExtractTextPlugin.extract({
				use: [
					'css-loader?sourceMap',
					'sass-loader?sourceMap'
				]
			})
		},
		{
			test: /\.svg$/,
			use: 'svg-url-loader'
		}]
	},
	plugins: [
		new ExtractTextPlugin('styles.css')
	],
	devServer: {
		inline: false, 
	  port: 9000
	}
}

module.exports = config