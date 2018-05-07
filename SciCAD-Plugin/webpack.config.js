var config = {
  entry: './src/electrospray-ui-plugin.js',
  output: {
    filename: './build/electrospray-ui-plugin.web.js',
    library: 'ElectrosprayUIPlugin',
    libraryTarget: 'var'
  },
  module:{
    loaders: [
      { test: /\.(png|woff|woff2|eot|ttf|svg|otf)$/,
        loader: 'url-loader?limit=100000'
      },
      { test: /\.css$/,
        use: [
          { loader: 'style-loader' },
          { loader: 'css-loader' }
        ]
      }
    ]
  },
  resolve: {
    alias: {
      "jquery": "jquery"
    }
  }
};

module.exports = config;
